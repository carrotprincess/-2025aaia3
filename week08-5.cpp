//week08-05_pacman_part1
//File-preference �r�Ω�j
void setup(){
  size(400,500);
}
int x = 200, y = 250;//�y��
float m = 0, dm = 0.03;//�L�a�j�p�Χ��ܶq
void draw(){
  background(0);
  fill(255,255,0);//���⪺
  arc(x,y,30,30,m,PI*2-m);//�p���F
  m +=dm;�L�ڤӤp���ܤF
  if(m>I||m<0)dm =-dm;//�Ӥj�Ӥp�N�t��
}