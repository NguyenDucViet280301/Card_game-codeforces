Suneet và Slavic chơi một trò chơi bài. Luật chơi như sau:

Mỗi lá bài có giá trị nguyên từ 1 đến 10.
Mỗi người chơi nhận được 2 lá bài úp (người chơi không biết lá bài của mình).
Trò chơi diễn ra theo lượt và gồm đúng hai lượt. Trong một lượt, cả hai người chơi chọn một lá bài úp ngẫu nhiên và lật lên. Người chơi lật được lá bài có giá trị lớn hơn sẽ thắng lượt đó. Nếu bằng nhau, không ai thắng lượt.
Người chơi thắng trò chơi nếu thắng được nhiều lượt hơn đối thủ (tức là lớn hơn một cách tuyệt đối). Nếu bằng nhau, không ai thắng trò chơi.
Vì Suneet và Slavic không phải là bạn thân nhất, bạn cần tính số cách trò chơi có thể xảy ra để Suneet thắng.

Đầu vào:

Dòng đầu tiên chứa một số nguyên t (1 ≤ t ≤ 10^4) - số lượng trường hợp kiểm tra.
Dòng đầu tiên và duy nhất của mỗi trường hợp kiểm tra chứa 4 số nguyên a1, a2, b1, b2 (1 ≤ a1, a2, b1, b2 ≤ 10) trong đó a1 và a2 là lá bài của Suneet, b1 và b2 là lá bài của Slavic.

Đầu ra:

Với mỗi trường hợp kiểm tra, in ra một số nguyên duy nhất - số cách Suneet có thể thắng trò chơi.

Giải quyết:

Suneet có hai lá bài a1 và a2.

Slavic có hai lá bài b1 và b2.

Mỗi người sẽ lật một lá bài trong mỗi vòng đấu. Có tổng cộng 4 cách để các lá bài được chọn (2 lá bài cho mỗi người, với 4 kết hợp khác nhau).

Mỗi lượt chọn bài có thể xảy ra 4 trường hợp:

Suneet thắng nếu lá bài của Suneet lớn hơn lá bài của Slavic.

Slavic thắng nếu lá bài của Slavic lớn hơn lá bài của Suneet.

Nếu hai lá bài bằng nhau, không ai thắng.

Để Suneet thắng cả trò chơi, anh ta phải thắng ít nhất 2 trong 4 lượt chọn bài.
