// FUN_00a7c170 @ 00a7c170 body=[[00a7c170, 00a7c1ec]]


void FUN_00a7c170(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (int)*(short *)((int)in_ECX + 0x152);
  iVar3 = (int)(short)in_ECX[0x55];
  iVar1 = in_ECX[0x53];
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if ((*(int *)(iVar1 + 0xa8) != iVar2) || (*(int *)(iVar1 + 0xac) != iVar3)) {
    *(int *)(iVar1 + 0xa8) = iVar2;
    *(int *)(iVar1 + 0xac) = iVar3;
    *(undefined4 *)(iVar1 + 0xc0) = 0xffffffff;
  }
  iVar2 = (**(code **)(*in_ECX + 0x114))();
  iVar1 = in_ECX[0x53];
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar2 + 4);
  *(undefined8 *)(iVar1 + 100) = *(undefined8 *)(iVar2 + 8);
  *(undefined8 *)(iVar1 + 0x6c) = *(undefined8 *)(iVar2 + 0x10);
  *(undefined1 *)(iVar1 + 0x74) = *(undefined1 *)(iVar2 + 0x18);
  return;
}

