// FUN_0095aca0 @ 0095aca0 body=[[0095aca0, 0095ad39]]


uint FUN_0095aca0(int param_1)

{
  uint uVar1;
  uint in_EDX;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_c [8];
  
  (**(code **)(*(int *)(DAT_00f20c04 + 0xac) + 0x18))(local_c);
  lVar2 = __alldiv(in_EDX << 0x1e,((int)in_EDX >> 0x1f) << 0x1e | in_EDX >> 2,0x1f40000,0);
  if (((int)((ulonglong)lVar2 >> 0x20) < 1) && (lVar2 < 0)) {
    return 0;
  }
  lVar2 = __allmul(*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x20),
                   *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x24),lVar2);
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar3 = __allmul(lVar2 >> 0xf,uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  return (uint)uVar3 >> 0x1e | (int)((ulonglong)uVar3 >> 0x20) << 2;
}

