import datetime
import os

def time_now():
    time = datetime.datetime.now()
    print("截止到", str(time)[:-10])
    print()

def task_name(directory):
    global lesson_name
    directory_lst = str(directory).split("/")
    class_name = str(directory_lst[-2])
    lesson_name = str(directory_lst[-1])
#    print("="*40)
    print("{} - {}".format(class_name, lesson_name))
    print("="*40)

def check_directories(directory, txt_file):
    global check_directories_valid
    check_directories_valid = 0
    # 从txt文件中读取所有的名字并存入names列表
    with open(txt_file, 'r') as file:
        names = [_.rstrip('\n') for _ in file.readlines()]
    # 检测给定目录中所有子目录的名字并且读入subdirectories列表
    subdirectories = [name for name in os.listdir(directory) if os.path.isdir(os.path.join(directory, name))]
    # 把在names列表中出现但在subdirectories列表中缺席的元素存入missing_names列表
    missing_names = [name for name in names if name not in subdirectories]
    # 如果missing_names列表为空则给出反馈，否则打印出所有缺席的名字
    if missing_names:
        print("没有提交的:")
        for name in missing_names:
            print(name)
    else:
#        print("所有同学均已提交。")
        check_directories_valid = 1
#    print()

def count_files(directory):
    # 读取到文件就把计数递增1,看着不太优雅但是很有效
    file_count = 0
    for root, dirs, files in os.walk(directory):
        for file in files:
            file_count += 1
    return file_count

def check_file_counts(directory, given_value):
    global check_file_counts_valid
    check_file_counts_valid = 0
    # 依次读取directory中的内容，如果是目录就把目录名加到subdirectories列表里
    subdirectories = [name for name in os.listdir(directory) if os.path.isdir(os.path.join(directory, name))]
    mismatched_directories = []
    for subdirectory in subdirectories:
        subdirectory_path = os.path.join(directory, subdirectory)
        # 调用file_count函数，查询subdirectories列表里面每个子目录的文件数量
        file_count = count_files(subdirectory_path)
        # 如果不符合预期，那么将目录名subdirectory加到mismatched_directories列表中
        if file_count != given_value:
            mismatched_directories.append(subdirectory)
    # 如果存在不符合预期的子目录，那么mismatched_directories列表非空
    if mismatched_directories:
        if check_directories_valid == 0:
            print()
        print("提交文件不全的:")
        for directory in mismatched_directories:
            print(directory)
    else:
#        print("已提交的文件数目均符合预期。")
        check_file_counts_valid = 1
#    print()

def check_extensions(directory, extensions):
    global check_extensions_valid
    check_extensions_valid = 0
    mismatched_directories = []
    for root, dirs, files in os.walk(directory):
        # 忽略给定的directory目录，只考虑其子目录中的文件
        if root == directory:
            continue
        for file in files:
            valid = 0
            file_extension = os.path.splitext(file)[1]
            for extension in extensions:
                if file_extension == extension:
                    valid = 1
                    break
            if valid == 0:
                mismatched_directories.append(os.path.basename(root))
                break
    if mismatched_directories:
        if check_file_counts_valid == 0 or check_directories_valid == 0:
            print()
        print("提交文件类型有误的：")
        for directory in mismatched_directories:
            print(directory)
        # 去掉extensions列表两边中括号
        extensions_str = str(extensions)[1:-1]
        # 来if给他整个活
        if len(extensions) > 1:
            additional = "的其中一种"
        else:
            additional = ""
        print()
        print("提示：本次需要提交的文件后缀名应为{}{}。".format(extensions_str, additional))
    else:
#        print("已提交的文件类型均符合预期。")
        check_extensions_valid = 1
#    print()

def all_done():
    if check_directories_valid + check_file_counts_valid + check_extensions_valid == 3:
        print("全班同学均已完成“{}”所要求的任务。".format(lesson_name))
#    else:
#        print("任务尚未完成，同学仍需努力！")
#    print("="*40)
    print()
    print()
#    print()

def automate(master_directory, txt_file):
    subdirs = [subdir for subdir in os.listdir(master_directory) if os.path.isdir(os.path.join(master_directory, subdir))]
    for subdir in subdirs:
        directory = os.path.join(master_directory, subdir)
        requirements = directory+"/requirements"
        with open(requirements, 'r') as file:
            file_contents = file.readlines()
        for line in file_contents:
            if 'count' in line:
                count = int(line.split('=')[1].strip())
            if 'extensions' in line:
                # 这一行借用了GPT之力。天知道这一行切片是怎么切的。
                extensions = line.split("'")[1::2]

        task_name(directory)
        check_directories(directory, txt_file)
        check_file_counts(directory, count)
        check_extensions(directory, extensions)
        all_done()



txt_file = '/home/charles/OneDrive/轻大文件/行软23-02/行软23-02 名单.txt'
master_directory = '/home/charles/Documents/计算机基础实践课程作业/'

time_now()
automate(master_directory, txt_file)