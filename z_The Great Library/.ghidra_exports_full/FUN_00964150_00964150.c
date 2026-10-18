// FUN_00964150 @ 00964150 body=[[00964150, 00964368]]


uint FUN_00964150(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  uint unaff_EBX;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128);
  if (((*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4)
                + 0x7d8) != 0) && (*(char *)(*(int *)(param_1 + 0x68) + 0x50) == '\0')) &&
     (*(int *)(*(int *)(param_1 + 0x68) + 0x3c) != 2)) {
    (**(code **)(*(int *)(DAT_00f20c04 + 0x10c) + 0x18))(&local_20,param_2);
    lVar5 = __alldiv(unaff_EBX << 0x1e,((int)unaff_EBX >> 0x1f) << 0x1e | unaff_EBX >> 2,0x1f40000,0
                    );
    if ((0 < (int)((ulonglong)lVar5 >> 0x20)) || (-1 < lVar5)) {
      if (*(int *)(param_1 + 0x58) < 100) {
        if (*(int *)(*(int *)(param_1 + 100) + 0x1a8) == *(int *)(param_1 + 0x58)) {
          return 0;
        }
        iVar3 = FUN_004b8a80();
        piVar1 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) +
                                   *(int *)(extraout_ECX + 300) * 0x10) + *(int *)(iVar3 + 0x6c) * 4
                          );
        cVar2 = (**(code **)(*piVar1 + 0x34))();
        if ((cVar2 == '\0') ||
           (*(int *)(piVar1[0x1f] + *(int *)(*(int *)(param_1 + 0x68) + 0x28) * 4) < 1)) {
          return *(uint *)(param_1 + 0x58);
        }
      }
      iVar3 = *(int *)(param_1 + 100);
      uVar4 = *(uint *)(*(int *)(iVar3 + 0x9c) + 0x2e8);
      local_20 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
      uVar4 = (uint)local_20;
      uStack_18 = 0;
      cVar2 = FUN_009f22b0();
      if (cVar2 != '\0') {
        lVar5 = __allmul(uVar4 + 0x8000,local_20._4_4_ + (uint)(0xffff7fff < uVar4),lVar5);
        lVar5 = lVar5 >> 0xf;
      }
      uStack_18 = CONCAT44(uStack_18._4_4_,*(undefined4 *)(iVar3 + 0x128));
      uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4) +
                                0xbcc) + 0x29c);
      lVar6 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
      uVar4 = *(uint *)(param_1 + 0x58);
      lVar5 = __allmul(uVar4 << 0xf,((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11,lVar5);
      lVar5 = __allmul(lVar5 >> 0xf,*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x28),
                       *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x2c));
      uVar7 = __allmul(lVar5 >> 0xf,lVar6 + 0x8000);
      return (uint)uVar7 >> 0x1e | (int)((ulonglong)uVar7 >> 0x20) << 2;
    }
  }
  return 0;
}

