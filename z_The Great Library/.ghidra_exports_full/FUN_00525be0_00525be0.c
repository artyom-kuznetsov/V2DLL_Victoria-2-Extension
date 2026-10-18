// FUN_00525be0 @ 00525be0 body=[[00525be0, 00525d8d]]


bool FUN_00525be0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *unaff_EDI;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_58 [4];
  undefined1 auStack_54 [4];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  if ((param_2 == *(int *)(param_3 + 0x54)) && (*(int *)(param_2 + 0x5c) == 2)) {
    if (DAT_0125873f != '\0') {
      return true;
    }
    cVar3 = FUN_005268f0();
    if (cVar3 != '\0') {
      FUN_008a8650(1);
      iVar6 = DAT_01258a3c;
      local_48 = *(undefined4 *)(param_1 + 0x1c);
      local_44 = *(undefined4 *)(param_1 + 0x20);
      if (*(char *)(*(int *)(param_3 + 0x54) + 0x59) != '\0') {
        iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x860) + *(int *)(param_2 + 0x50) * 4) + 0x50);
        if (iVar7 + 1 < *(int *)(param_3 + 0x50)) {
          return false;
        }
        if (*(int *)(param_3 + 0x50) < iVar7 + -1) {
          return false;
        }
      }
      if (*(int *)(param_3 + 0x50) !=
          *(int *)(*(int *)(*(int *)(param_1 + 0x860) + *(int *)(param_2 + 0x50) * 4) + 0x50)) {
        iVar7 = 1;
        if (4 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
          do {
            iVar1 = *(int *)(*(int *)(iVar6 + 0xc) + iVar7 * 4);
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x860) + *(int *)(param_2 + 0x50) * 4) + 0x50)
                < *(int *)(param_3 + 0x50)) {
              puVar4 = (uint *)(**(code **)(*(int *)(iVar1 + 0x50) + 0x18))(local_58,local_50);
            }
            else {
              puVar4 = (uint *)(**(code **)(*(int *)(iVar1 + 0x80) + 0x18))(auStack_54,local_50);
            }
            uVar2 = *puVar4;
            uVar8 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
            lVar9 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x8c0) + iVar7 * 8),
                             *(undefined4 *)(*(int *)(param_1 + 0x8c0) + 4 + iVar7 * 8),uVar8);
            uVar5 = (uint)(lVar9 >> 0xf);
            uVar2 = *unaff_EDI;
            *unaff_EDI = *unaff_EDI + uVar5;
            unaff_EDI[1] = unaff_EDI[1] + (int)((ulonglong)(lVar9 >> 0xf) >> 0x20) +
                           (uint)CARRY4(uVar2,uVar5);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2);
        }
        uVar8 = FUN_00b31c36();
        iVar6 = (int)((ulonglong)uVar8 >> 0x20);
        if ((iVar6 < (int)unaff_EDI[1]) ||
           ((iVar6 <= (int)unaff_EDI[1] && ((uint)uVar8 <= *unaff_EDI)))) {
          cVar3 = (**(code **)(*(int *)(param_3 + 0x58) + 0x18))(local_50);
          return cVar3 != '\0';
        }
      }
    }
  }
  return false;
}

