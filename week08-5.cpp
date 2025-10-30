//week08-05_pacman_part1
//File-preference 字形放大
void setup(){
  size(400,500);
}
int x = 200, y = 250;//座標
float m = 0, dm = 0.03;//嘴吧大小及改變量
void draw(){
  background(0);
  fill(255,255,0);//黃色的
  arc(x,y,30,30,m,PI*2-m);//小精靈
  m +=dm;嘴巴太小改變了
  if(m>I||m<0)dm =-dm;//太大太小就負號
}