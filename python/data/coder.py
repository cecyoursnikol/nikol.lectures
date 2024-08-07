data = {
    "products": [
        {
            "id": 1,
            "name": "i Phone 12 Pro Max",
            "desc": "64GB Storage",
            "price": 57900,
            "color": "#0d0100",
            "image": "https://cdn.dxomark.com/wp-content/uploads/medias/post-80694/Apple-iPhone-12-Pro-Max-Blue-Yoast-image-packshot-review.jpg"
        },
        {
            "id": 2,
            "name": "i phone 14 pro max",
            "desc": "128GB Storage",
            "price": 41500,
            "color": "#301934",
            "image": "https://store.storeimages.cdn-apple.com/4668/as-images.apple.com/is/iphone-14-pro-finish-select-202209-6-7inch-deeppurple?wid=2560&hei=1440&fmt=p-jpg&qlt=80&.v=1663703841896"
        },
        {
            "id": 3,
            "name": "i phone 11",
            "desc": "16GB Storage",
            "price": 34900,
            "color": "#FFFFFF",
            "image": "https://vexclusive.in/2989-thickbox_default/apple-iphone-11-128gb-refurbished-very-good.jpg"
        },
        {
            "id": 4,
            "name": "i phone 11 pro",
            "desc": "32GB Storage",
            "price": 39900,
            "color": "#FFFFFF",
            "image": "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTk6rR2RkwxJvggiU5_TskD9BKC70YsN4L6N2YLREhvgwYKmsuZrFtC39Jgy47zsMLE6Bg&usqp=CAU"
        },
        {
            "id": 5,
            "name": "redmi note 9",
            "desc": "128GB Storage And 8GB RAM",
            "price": 12850,
            "color": "#000000",
            "image": "https://m.media-amazon.com/images/I/41zD4GN4E2L._SX300_SY300_QL70_FMwebp_.jpg"
        },
        {
            "id": 6,
            "name": "redmi note 9 pro",
            "desc": "128GB Storage And 8GB RAM",
            "price": 15900,
            "color": "#000000",
            "image": "https://m.media-amazon.com/images/I/41%2BcwZKB5vL._SX300_SY300_QL70_FMwebp_.jpg"
        },
        {
            "id": 7,
            "name": "1 pulse 8 pro",
            "desc": "64GB Storage And 8GB RAM",
            "price": 28999,
            "color": "#6E6D6D",
            "image": "https://m.media-amazon.com/images/I/41qLZhKF5ZL._SX300_SY300_QL70_FMwebp_.jpg"
        },
        {
            "id": 8,
            "name": "samsung s20",
            "desc": "64GB Storage And 8GB RAM",
            "price": 34999,
            "color": "#545151",
            "image": "https://m.media-amazon.com/images/I/41ezRvTwcaL._SX300_SY300_QL70_FMwebp_.jpg"
        },
        {
            "id": 9,
            "name": "samsung s23",
            "desc": "264GB Storage And 16GB RAM",
            "price": 74798,
            "color": "#966B6B",
            "image": "https://m.media-amazon.com/images/I/41QPv5h1veL._SX300_SY300_QL70_FMwebp_.jpg"
        },
        {
            "id": 10,
            "name": "samsung s10",
            "desc": "264GB Storage And 16GB RAM",
            "price": 71000,
            "color": "#000000",
            "image": "https://img1.gadgetsnow.com/gd/images/products/additional/large/G105828_View_1/mobiles/smartphones/samsung-galaxy-s10-128-gb-prism-white-8-gb-ram-.jpg"
        },
        {
            "id": 11,
            "name": "realme 10",    
            "desc": "64GB Storage And 8GB RAM",
            "price": 16882,
            "color": "#E4AFEA",
            "image": "https://m.media-amazon.com/images/I/41kIUfqB7rL._SX300_SY300_QL70_FMwebp_.jpg"
        },
        {
            "id": 12,
            "name": "realme 10 pro plus",
            "desc": "128GB Storage And 16GB RAM",
            "price": 25999,
            "color": "#000000",
            "image": "https://img3.gadgetsnow.com/gd/images/products/additional/large/G406451_View_1/mobiles/smartphones/realme-10-pro-plus-128-gb-nebula-blue-6-gb-ram-.jpg"
        }
    ]
}

for i in data['products']:
    for j in i:
        print(i[j])
    print("----")