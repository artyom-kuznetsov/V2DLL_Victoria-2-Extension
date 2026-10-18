// FUN_0052b1c0 @ 0052b1c0 body=[[0052b1c0, 0052b35e]]


uint * FUN_0052b1c0(int param_1,uint *param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_30;
  
  iVar3 = *(int *)(param_1 + 4 + (DAT_00f096c8 + 0xb) * 0x10) -
          *(int *)(param_1 + (DAT_00f096c8 + 0xb) * 0x10) >> 3;
  *param_2 = 0;
  param_2[1] = 0;
  local_30 = 0;
  if (0 < iVar3) {
    do {
      if (local_30 == 1) {
        if (*(int *)(*(int *)(param_1 + 0x1234) + 4) == 0) {
          uVar5 = 0xffffffff;
          bVar6 = 0x7fff < *param_2;
          *param_2 = *param_2 - 0x8000;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1234) + 4);
          uVar7 = __allmul(*(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x34),
                           *(undefined4 *)(*param_3 + 8),*(undefined4 *)(*param_3 + 0xc));
          uVar7 = __alldiv((uint)uVar7 & 0xffff8000,(int)((ulonglong)uVar7 >> 0x20),DAT_00f0b340,
                           DAT_00f0b344);
          uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
          bVar6 = CARRY4(*param_2,(uint)uVar7);
          *param_2 = *param_2 + (uint)uVar7;
        }
LAB_0052b342:
        param_2[1] = param_2[1] + uVar5 + (uint)bVar6;
      }
      else if (local_30 == 0) {
        puVar1 = (uint *)FUN_0051b610(*(undefined4 *)*param_3,((undefined4 *)*param_3)[1]);
        uVar5 = *puVar1;
        uVar4 = *param_2;
        *param_2 = *param_2 + uVar5;
        param_2[1] = param_2[1] + puVar1[1] + (uint)CARRY4(uVar4,uVar5);
      }
      else if (local_30 == 2) {
        puVar1 = (uint *)FUN_0051b610(*(undefined4 *)(*param_3 + 0x10),
                                      *(undefined4 *)(*param_3 + 0x14));
        uVar5 = *puVar1;
        uVar4 = *param_2;
        *param_2 = *param_2 + uVar5;
        param_2[1] = param_2[1] + puVar1[1] + (uint)CARRY4(uVar4,uVar5);
      }
      else {
        if (local_30 != 3) {
          if (local_30 == 6) {
            iVar2 = param_4;
            if (param_4 == 0) {
              iVar2 = param_1 + 0x1448;
            }
            puVar1 = (uint *)FUN_00539670(param_1,iVar2);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
          }
          else {
            iVar2 = *(int *)(param_1 + (DAT_00f096c8 + 0xb) * 0x10);
            uVar4 = *(uint *)(iVar2 + local_30 * 8);
            uVar5 = *(uint *)(iVar2 + 4 + local_30 * 8);
          }
          bVar6 = CARRY4(*param_2,uVar4);
          *param_2 = *param_2 + uVar4;
          goto LAB_0052b342;
        }
        puVar1 = (uint *)FUN_0051b610(*(undefined4 *)(*param_3 + 0x18),
                                      *(undefined4 *)(*param_3 + 0x1c));
        uVar5 = *puVar1;
        uVar4 = *param_2;
        *param_2 = *param_2 + uVar5;
        param_2[1] = param_2[1] + puVar1[1] + (uint)CARRY4(uVar4,uVar5);
      }
      local_30 = local_30 + 1;
    } while (local_30 < iVar3);
  }
  return param_2;
}

