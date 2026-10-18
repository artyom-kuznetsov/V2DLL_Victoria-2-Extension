// FUN_00822100 @ 00822100 body=[[00822100, 008221ec] [008221f0, 0082222a] [00822230, 008222b9] [008222c0, 008222fc]]


void FUN_00822100(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_1c;
  int local_18;
  
  iVar6 = *(int *)(param_1 + 0xa0) / 2;
  *(int *)(param_1 + 0x84) = iVar6;
  if ((iVar6 == 0) && (0 < *(int *)(param_1 + 0xa0))) {
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  puVar8 = *(undefined4 **)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x7b4);
  local_18 = 0;
  local_1c = 0;
  do {
    do {
      if (puVar8 == (undefined4 *)0x0) {
        *(int *)(param_1 + 0x78) = local_1c + local_18;
        iVar6 = DAT_012587e4;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        iVar6 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(param_1 + 0x38) * 4);
        uVar7 = *(uint *)(iVar6 + 0xda8);
        while ((*(uint *)(iVar6 + 0xda8) <= uVar7 && (uVar7 < *(uint *)(iVar6 + 0xdac)))) {
          piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar7 + 4) * 4) + 0x7b4)
          ;
          uVar7 = uVar7 + 8;
          while (piVar1 != (int *)0x0) {
            piVar2 = (int *)*piVar1;
            piVar1 = (int *)piVar1[2];
            cVar5 = (**(code **)(*piVar2 + 0x3c))();
            if (cVar5 != '\0') {
              piVar3 = (int *)piVar2[0xe];
              iVar9 = 0;
              while (piVar3 != (int *)0x0) {
                iVar4 = *piVar3;
                piVar3 = (int *)piVar3[2];
                if (*(int *)(*(int *)(iVar4 + 0x38) + 0x34) == 6) {
                  iVar9 = iVar9 + 1;
                }
              }
              iVar9 = piVar2[0x10] - iVar9;
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + iVar9;
              if (*(int *)(param_1 + 0x80) < iVar9) {
                *(int *)(param_1 + 0x80) = iVar9;
              }
            }
          }
        }
        if ((*(int *)(param_1 + 0x78) / 3 <= *(int *)(param_1 + 0x7c)) ||
           (0xc < *(int *)(param_1 + 0x80))) {
          puVar8 = *(undefined4 **)(param_1 + 0x44);
          iVar6 = 0;
          if (puVar8 != (undefined4 *)0x0) {
            do {
              piVar1 = (int *)*puVar8;
              puVar8 = (undefined4 *)puVar8[2];
              iVar9 = (**(code **)(*piVar1 + 0x1e4))();
              if (iVar9 == 0xf) {
                iVar6 = iVar6 + 1;
              }
            } while (puVar8 != (undefined4 *)0x0);
            if ((iVar6 != 0) && (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x78) / 2)) {
              return;
            }
          }
          *(undefined4 *)(param_1 + 0x84) = 0;
        }
        return;
      }
      piVar1 = (int *)*puVar8;
      puVar8 = (undefined4 *)puVar8[2];
      cVar5 = (**(code **)(*piVar1 + 0x3c))();
    } while (cVar5 == '\0');
    iVar6 = (**(code **)(*piVar1 + 0x30))();
    piVar1 = *(int **)(iVar6 + 0x90);
joined_r0x00822183:
    if (piVar1 != (int *)0x0) {
      iVar6 = *(int *)(*(int *)(*piVar1 + 0x38) + 0x34);
      piVar1 = (int *)piVar1[2];
      if (iVar6 == 6) break;
      if (iVar6 != 5) {
        local_18 = local_18 + 1;
        break;
      }
      goto LAB_008221a3;
    }
  } while( true );
  if (iVar6 == 5) {
LAB_008221a3:
    local_1c = local_1c + 1;
  }
  goto joined_r0x00822183;
}

