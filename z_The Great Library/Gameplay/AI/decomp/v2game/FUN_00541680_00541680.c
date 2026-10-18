// FUN_00541680 @ 00541680 body=[[00541680, 00541759] [00541760, 005417c4]]


void FUN_00541680(char param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_EAX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  undefined8 uVar8;
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1 == '\0') {
    puVar5 = (undefined4 *)FUN_00472300(local_20);
    uVar8 = __allmul(*puVar5,puVar5[1],0x1f40000,0);
    iVar7 = DAT_012586dc;
    iVar6 = *(int *)(in_EAX + 0x15a0) - ((uint)uVar8 >> 0x1e | (int)((ulonglong)uVar8 >> 0x20) << 2)
    ;
    *(int *)(in_EAX + 0x15a0) = iVar6;
    if (iVar6 < 0) {
      *(undefined4 *)(in_EAX + 0x15a0) = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar7 + 0x40) + 0xc4);
      if (iVar2 < iVar6) {
        *(int *)(in_EAX + 0x15a0) = iVar2;
      }
    }
    uVar3 = *(uint *)(*(int *)(iVar7 + 0x40) + 0x98);
    uVar8 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
    puVar1 = (uint *)(unaff_EDI + 0x18);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar8;
    *(int *)(unaff_EDI + 0x1c) =
         *(int *)(unaff_EDI + 0x1c) + (int)((ulonglong)uVar8 >> 0x20) +
         (uint)CARRY4(uVar3,(uint)uVar8);
  }
  iVar7 = (**(code **)(*DAT_012588e8 + 0x18))();
  local_14 = 0;
  if (0 < iVar7) {
    do {
      iVar6 = *(int *)(DAT_012588e8[0x2b3] + local_14 * 4);
      local_10 = *(int *)(iVar6 + 0x198) - *(int *)(iVar6 + 0x194) >> 4;
      if (0 < local_10) {
        local_c = 0;
        do {
          iVar2 = *(int *)(local_c + *(int *)(iVar6 + 0x194));
          while (iVar4 = iVar2, iVar4 != 0) {
            iVar2 = *(int *)(iVar4 + 0x27c);
            if (*(int *)(iVar4 + 0x274) == unaff_EDI) {
              if (param_1 == '\0') {
                *(undefined4 *)(iVar4 + 0x118) = 0x8000;
                *(undefined4 *)(iVar4 + 0x11c) = 0;
              }
              *(undefined4 *)(iVar4 + 0x274) = 0;
            }
          }
          local_c = local_c + 0x10;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar7);
  }
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  return;
}

