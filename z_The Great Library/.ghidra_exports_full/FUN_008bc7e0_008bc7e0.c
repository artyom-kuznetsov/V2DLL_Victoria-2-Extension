// FUN_008bc7e0 @ 008bc7e0 body=[[008bc7e0, 008bc832]]


undefined8 FUN_008bc7e0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  longlong lVar3;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  lVar3 = __allmul(*(undefined4 *)(iVar2 + 0x7c8),*(undefined4 *)(iVar2 + 0x7cc),0x1f40000,0);
  return CONCAT44((int)((ulonglong)(lVar3 >> 0x1e) >> 0x20),
                  CONCAT31((int3)((uint)((int)((ulonglong)lVar3 >> 0x20) << 2) >> 8),
                           iVar1 <= (int)(lVar3 >> 0x1e)));
}

