

data = {
    'Rudra':
        {
            'username': 'rudra',
            'password': '23rudz',
            'post': 100,
            'like': 2000,
        },

    'khush':
        {
            'username': 'khush',
            'password': '124',
            'post': 11,
            'like': 20,
        },

}

print(data['khush']['post'])
for i in data:
    for j in data[i]:
        print(data[i][j])