# poem_file = '/home/charles/Downloads/唐你妈的诗.txt'
poem_file = '/home/charles/Downloads/全唐诗.txt'

target = "】李白"    # “李白”二字前必须有个'】'，否则可能会把其他诗人写的、题目中带“李白”两字的诗歌也计入。
poems = []

with open(poem_file, 'r', encoding='utf-8') as file:
    poem = ''
    poem_title = ''
    content = file.readlines()
    for line in content:
        if line.strip() != '':
            if line.startswith('   卷') or line.startswith('    卷'):
                if target in poem_title and poem != '':
                    poems.append(poem)
                    poem = ''
                poem_title = line.strip()
            else:
                poem += line.strip()
        else:
            continue



print(poems[:-1])