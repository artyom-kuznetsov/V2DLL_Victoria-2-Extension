// FUN_009f65b0 @ 009f65b0 body=[[009f65b0, 009f6642]]


void FUN_009f65b0(void)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = *(ushort *)((int)in_ECX + 0x3a);
  uVar5 = FUN_009f77c0();
  if (uVar5 == uVar1) {
    return;
  }
  uVar1 = *(ushort *)((int)in_ECX + 0x3a);
  uVar2 = *(ushort *)(in_ECX + 0xe);
  iVar6 = FUN_009f75f0(uVar1 + 1);
  iVar7 = FUN_009f75f0((uint)uVar1);
  uVar5 = (uint)*(ushort *)((int)in_ECX + 0x3a);
  if (iVar7 <= iVar6) {
    iVar6 = FUN_009f75f0(uVar5 + 1);
    if ((int)(uint)uVar2 <= iVar6) goto LAB_009f661c;
    uVar5 = (uint)*(ushort *)((int)in_ECX + 0x3a);
  }
  uVar4 = FUN_009f75f0(uVar5 + 1);
  *(undefined2 *)(in_ECX + 0xe) = uVar4;
LAB_009f661c:
  if (in_ECX[0xd] != -1) {
    *(short *)((int)in_ECX + 0x3a) = *(short *)((int)in_ECX + 0x3a) + 1;
    return;
  }
  pcVar3 = *(code **)(*in_ECX + 0x80);
  *(short *)((int)in_ECX + 0x3a) = *(short *)((int)in_ECX + 0x3a) + 1;
  (*pcVar3)();
  return;
}

