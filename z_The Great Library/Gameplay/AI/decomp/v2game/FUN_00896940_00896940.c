// FUN_00896940 @ 00896940 body=[[00896940, 008969f5] [008969f9, 00896a01]]


void FUN_00896940(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [5];
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  local_1c = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_20 = 0x8000;
  FUN_008a5830(local_18,&local_20);
  FUN_0052b610(iVar1,local_18);
  uVar2 = *(uint *)(in_ECX + 0x20);
  uVar4 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  lVar5 = __allmul(uVar4,local_20,local_1c);
  uVar3 = (uint)(lVar5 >> 0xf);
  uVar2 = *(uint *)(iVar1 + 0xe78);
  *(uint *)(iVar1 + 0xe78) = uVar3 + *(uint *)(iVar1 + 0xe78);
  *(uint *)(iVar1 + 0xe7c) =
       (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) + *(int *)(iVar1 + 0xe7c) +
       (uint)CARRY4(uVar3,uVar2);
  if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_18[0]);
  }
  return;
}

