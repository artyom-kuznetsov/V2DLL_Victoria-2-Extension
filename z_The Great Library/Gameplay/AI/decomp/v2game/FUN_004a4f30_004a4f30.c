// FUN_004a4f30 @ 004a4f30 body=[[004a4f30, 004a5012]]


/* WARNING: Removing unreachable block (ram,0x004a4fca) */

void FUN_004a4f30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int local_14;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x58);
  iVar2 = *(int *)(param_1 + 0x7c);
  if ((-1 < iVar2) && ((iVar2 < 2 || (iVar2 == 3)))) {
    FUN_004dabf0(*(undefined4 *)(param_1 + 0x70),param_1 + 8,param_2);
    iVar2 = *(int *)(param_1 + 100);
    uVar3 = *(uint *)(param_1 + 0x60);
    FUN_0047e3e0(param_3,param_2);
    if (iVar1 == 0 && local_14 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = __alldiv(uVar3 << 0xf,iVar2 << 0xf | uVar3 >> 0x11,iVar1,local_14);
      if (0x8000 < lVar4) {
        lVar4 = 0x8000;
      }
    }
    FUN_0047de60(param_2,lVar4);
    FUN_004a4eb0();
    return;
  }
  FUN_00561c40();
  FUN_004a4eb0();
  return;
}

