// FUN_009f6550 @ 009f6550 body=[[009f6550, 009f65ac]]


void FUN_009f6550(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x3a);
  if (uVar1 != 0) {
    iVar3 = FUN_009f75f0(uVar1 - 1);
    iVar4 = FUN_009f75f0((uint)uVar1);
    if (iVar3 < iVar4) {
      uVar2 = FUN_009f75f0(*(ushort *)(in_ECX + 0x3a) - 1);
      *(undefined2 *)(in_ECX + 0x38) = uVar2;
    }
    if (*(short *)(in_ECX + 0x3a) != 0) {
      *(short *)(in_ECX + 0x3a) = *(short *)(in_ECX + 0x3a) + -1;
    }
    *(undefined1 *)(in_ECX + 0x4d) = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  return;
}

