// FUN_0081aa50 @ 0081aa50 body=[[0081aa50, 0081aaff]]


void FUN_0081aa50(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 4) + 100);
  (**(code **)(*piVar1 + 0x5c))(piVar1,0x100,0x100,1,1,0x15,0,in_ECX + 0xc,0);
  piVar1 = *(int **)(*(int *)(in_ECX + 4) + 100);
  (**(code **)(*piVar1 + 0x5c))(piVar1,0x100,0x100,1,1,0x15,0,in_ECX + 0x10,0);
  piVar1 = *(int **)(*(int *)(in_ECX + 4) + 100);
  (**(code **)(*piVar1 + 0x5c))(piVar1,0x200,0x200,1,0x200,0x15,0,in_ECX + 0x14,0);
  piVar1 = *(int **)(*(int *)(in_ECX + 4) + 100);
  (**(code **)(*piVar1 + 0x5c))(piVar1,0x400,0x200,1,0x200,0x32,0,in_ECX + 0x18,0);
  *(undefined2 *)(in_ECX + 0x3c) = 0x101;
  *(undefined4 *)(in_ECX + 0x40) = 5;
  return;
}

