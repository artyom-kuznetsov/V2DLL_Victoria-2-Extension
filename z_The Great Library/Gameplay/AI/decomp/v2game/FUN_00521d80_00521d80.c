// FUN_00521d80 @ 00521d80 body=[[00521d80, 00521fc1]]


void FUN_00521d80(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  iVar4 = DAT_012588e8;
  iVar6 = *(int *)(param_2 + 0x48);
  local_1c = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (0 < (int)(*(int *)(param_2 + 0x4c) - iVar6 & 0xfffffffcU)) {
    do {
      iVar6 = *(int *)(*(int *)(iVar4 + 0xacc) + *(int *)(iVar6 + local_20 * 4) * 4);
      bVar3 = false;
      local_24 = 0;
      if ((*(char *)(param_3 + 0x131) != '\0') &&
         (iVar7 = *(int *)(*(int *)(iVar6 + 0x118) + *(int *)(param_3 + 0x134) * 4),
         DAT_0125ceac < *(int *)(iVar7 + 0x20))) {
        local_24 = *(int *)(iVar7 + 0x24);
        bVar3 = true;
      }
      piVar1 = *(int **)(iVar6 + 0xd8);
      do {
        if (piVar1 == (int *)0x0) {
          if (!bVar3) goto LAB_00521e51;
          goto LAB_00521e4d;
        }
        piVar2 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar5 = (**(code **)(*piVar2 + 0x30))();
      } while ((cVar5 == '\0') || (piVar2[0x16] != param_3));
      if (piVar2[0x15] == 0) {
        iVar7 = piVar2[0x11];
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 + 0x189373U < 0x39580e) {
        local_24 = local_24 + (iVar7 * 1000) / 100000;
      }
      else {
        uVar8 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
        iVar7 = __alldiv(uVar8,100000,0);
        local_24 = local_24 + iVar7;
      }
LAB_00521e4d:
      local_1c = local_1c + 1;
LAB_00521e51:
      if (local_10 < local_24) {
        local_10 = local_24;
        local_18 = iVar6;
      }
      iVar6 = *(int *)(param_2 + 0x48);
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_2 + 0x4c) - iVar6 >> 2);
    if (((1 < local_1c) && (local_18 != 0)) &&
       (iVar7 = 0, 0 < (int)(*(int *)(param_2 + 0x4c) - iVar6 & 0xfffffffcU))) {
      do {
        iVar6 = *(int *)(*(int *)(iVar4 + 0xacc) + *(int *)(iVar6 + iVar7 * 4) * 4);
        if (iVar6 != local_18) {
          if ((*(char *)(param_3 + 0x131) != '\0') &&
             (DAT_0125ceac <
              *(int *)(*(int *)(*(int *)(iVar6 + 0x118) + *(int *)(param_3 + 0x134) * 4) + 0x20))) {
            FUN_0053e730();
          }
          piVar1 = *(int **)(iVar6 + 0xd8);
          do {
            if (piVar1 == (int *)0x0) goto LAB_00521fa5;
            piVar2 = (int *)*piVar1;
            piVar1 = (int *)piVar1[2];
            cVar5 = (**(code **)(*piVar2 + 0x30))();
          } while ((cVar5 == '\0') || (piVar2[0x16] != param_3));
          FUN_0053e510(param_1,piVar2);
        }
LAB_00521fa5:
        iVar6 = *(int *)(param_2 + 0x48);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_2 + 0x4c) - iVar6 >> 2);
    }
  }
  return;
}

