// FUN_00a43230 @ 00a43230 body=[[00a43230, 00a432fa]]


void FUN_00a43230(undefined4 param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 100);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x50));
  }
  (**(code **)(*param_2 + 0x104))(param_2,0,uVar2);
  uVar1 = *(uint *)(in_ECX + 0x68);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x50));
  }
  (**(code **)(*param_2 + 0x104))(param_2,1,uVar2);
  uVar1 = *(uint *)(in_ECX + 0x6c);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x50));
  }
  (**(code **)(*param_2 + 0x104))(param_2,2,uVar2);
  uVar1 = *(uint *)(in_ECX + 0x70);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x50));
  }
  (**(code **)(*param_2 + 0x104))(param_2,3,uVar2);
  (**(code **)(**(int **)(in_ECX + 4) + 0xc))(*(int **)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  return;
}

