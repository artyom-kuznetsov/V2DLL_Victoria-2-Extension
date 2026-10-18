// FUN_00a89630 @ 00a89630 body=[[00a89630, 00a89667] [00a89670, 00a897b7]]


undefined4 FUN_00a89630(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x17cc);
  piVar7 = *(int **)(in_EAX + 0xac);
  if (piVar7 != (int *)(in_EAX + 0xac)) {
    do {
      iVar2 = piVar7[4];
      piVar3 = (int *)*piVar7;
      uVar5 = DAT_012586d0 - iVar2;
      if (86399999 < uVar5) {
        uVar5 = iVar2 - DAT_012586d0;
      }
      if ((uint)piVar7[5] <= uVar5) {
        if ((*(int *)(in_EAX + 0x48) == 0) || (86399999 < (uint)(iVar2 - *(int *)(in_EAX + 0x48))))
        {
          *(int *)(in_EAX + 0x48) = iVar2;
        }
        iVar2 = *(int *)(in_EAX + 0x48);
        if (iVar2 != 0) {
          uVar6 = DAT_012586d0 - iVar2;
          uVar5 = uVar6;
          if (86399999 < uVar6) {
            uVar5 = iVar2 - DAT_012586d0;
          }
          if ((uint)(iVar1 * 60000) <= uVar5) {
LAB_00a89769:
            if (2 < *(int *)(in_EAX + 0x18)) {
              *(undefined4 *)(param_1 + 0x1c) = 1;
            }
            if (3 < *(int *)(in_EAX + 0x18)) {
              if (param_2 == (undefined4 *)0x0) {
                *(undefined4 *)(in_EAX + 0x18) = 7;
                return 1;
              }
              *param_2 = 2;
              param_2[1] = in_EAX;
              param_2[3] = 0;
            }
            FUN_00a8a360();
            return 1;
          }
          if ((uint)piVar7[6] <= (uint)piVar7[5]) {
            if (86399999 < uVar6) {
              uVar6 = iVar2 - DAT_012586d0;
            }
            if ((uint)(iVar1 * 30000) <= uVar6) goto LAB_00a89769;
          }
        }
        if (piVar7[0x14] != 0) {
          *(int *)(in_EAX + 0x9c) = *(int *)(in_EAX + 0x9c) - (uint)*(ushort *)(piVar7 + 8);
        }
        *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + 1;
        piVar7[5] = piVar7[5] + *(int *)(in_EAX + 0x90);
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
        iVar2 = *(int *)(in_EAX + 0xbc);
        puVar4 = *(undefined4 **)(iVar2 + 4);
        *piVar7 = iVar2;
        piVar7[1] = (int)puVar4;
        *puVar4 = piVar7;
        *(int **)(iVar2 + 4) = piVar7;
        if ((piVar3 == (int *)*(int *)(in_EAX + 0xac)) && (*(int *)(in_EAX + 0xac) != in_EAX + 0xac)
           ) {
          *(int *)(in_EAX + 0x44) = piVar3[5] + piVar3[4];
        }
      }
      piVar7 = piVar3;
    } while (piVar3 != (int *)(in_EAX + 0xac));
  }
  return 0;
}

