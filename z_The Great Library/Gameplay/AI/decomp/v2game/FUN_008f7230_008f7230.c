// FUN_008f7230 @ 008f7230 body=[[008f7230, 008f7269]]


void FUN_008f7230(int param_1)

{
  int in_ECX;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(in_ECX + 0x19) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  FUN_0055dda0(uVar1,uVar2);
  return;
}

