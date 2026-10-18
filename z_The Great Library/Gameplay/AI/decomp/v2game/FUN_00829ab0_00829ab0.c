// FUN_00829ab0 @ 00829ab0 body=[[00829ab0, 00829f6b]]


void FUN_00829ab0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_a;
  char local_9 [5];
  
  iVar6 = param_1;
  if (1 < *(int *)(param_1 + 0xb4)) {
    piVar1 = (int *)(param_1 + 0xac);
    local_1c = piVar1;
    local_14 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xac) + 0x2c))();
    local_2c = *(int *)(local_14 + 0xdc);
    local_10 = *(int *)(local_2c + 0xe8);
    if (*(int *)(local_14 + 0xa0) == 0) {
      if (*(int *)(local_14 + 0xec) < 1) {
        local_24 = 0;
      }
      else {
        local_24 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(local_14 + 0xe8) * 4);
      }
    }
    else {
      local_24 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_14 + 0xa0) * 4);
    }
    if (*(int *)(local_14 + 0xec) < 1) {
      local_28 = 0;
    }
    else {
      local_28 = *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(local_14 + 0xe4) * 4);
    }
    if (local_24 == 0) {
      local_24 = local_2c;
    }
    local_a = FUN_0082c6e0();
    local_30 = (undefined4 *)*piVar1;
    if (local_30 != (undefined4 *)0x0) {
      do {
        piVar1 = (int *)*local_30;
        local_30 = (undefined4 *)local_30[2];
        iVar4 = (**(code **)(*piVar1 + 0x2c))();
        if (((((iVar4 != local_14) && (*(char *)(iVar4 + 0x164) == '\0')) &&
             (*(char *)(iVar4 + 0x104) == '\0')) &&
            ((*(int *)(iVar4 + 0x74) == 0 && (*(int *)(iVar4 + 0x1b4) == 0)))) &&
           ((*(int *)(iVar6 + 0xe8) == 0 ||
            ((*(int *)(iVar4 + 0x14) != *(int *)(iVar6 + 0xf0) ||
             (*(int *)(iVar4 + 0x10) != *(int *)(iVar6 + 0xec))))))) {
          local_9[0] = '\0';
          cVar3 = FUN_00829f70(iVar6,iVar4,local_9);
          if ((cVar3 == '\0') && ((local_9[0] == '\0' && (*(int *)(iVar4 + 0x70) == 0)))) {
            if (*(int *)(iVar4 + 0xec) < 1) {
LAB_00829c62:
              iVar6 = *(int *)(*(int *)(iVar4 + 0xdc) + 0x5c);
              iVar6 = (*(int *)(iVar6 + 0xcc) - *(int *)(iVar6 + 200)) / 0x24;
              local_20 = 0;
              if (0 < iVar6) {
                local_18 = 0;
                do {
                  iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                  *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0xdc) + 0x5c) + 200) +
                                           4 + local_18) * 4);
                  cVar3 = FUN_00416e40();
                  if (((cVar3 != '\0') && (*(int *)(iVar5 + 300) == *(int *)(param_1 + 0x38))) &&
                     (iVar5 = FUN_005db920(), iVar5 == 0)) goto LAB_00829ece;
                  local_18 = local_18 + 0x24;
                  local_20 = local_20 + 1;
                } while (local_20 < iVar6);
              }
            }
            else {
              cVar3 = FUN_0082a880(iVar6,iVar4,
                                   *(undefined4 *)
                                    (*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar4 + 0xe4) * 4)
                                  );
              if (cVar3 == '\0') {
                FUN_0082e780();
                iVar6 = param_1;
                goto LAB_00829ed8;
              }
              if (*(int *)(iVar4 + 0xec) < 1) goto LAB_00829c62;
            }
            iVar5 = *(int *)(*(int *)(iVar4 + 0xdc) + 0xe8);
            local_20 = iVar5;
            if (((iVar5 == 0) || (iVar5 == local_10)) ||
               ((local_10 != 0 && (cVar3 = FUN_004e0ac0(), cVar3 != '\0')))) {
              FUN_0082e5d0(param_1);
            }
            iVar7 = local_10;
            iVar6 = param_1;
            if (((*(int *)(iVar4 + 0xa0) < 1) && (*(int *)(iVar4 + 0x70) == 0)) &&
               ((iVar5 != local_10 &&
                (((iVar5 == 0 || (local_10 == 0)) ||
                 (cVar3 = FUN_004e0ac0(), iVar6 = param_1, cVar3 == '\0')))))) {
              if (*(int *)(param_1 + 0xe0) == 0) {
                if (((((iVar7 != 0) && (cVar3 = FUN_0048f070(iVar7,0), cVar3 != '\0')) &&
                     ((iVar6 = FUN_0048e120(), *(int *)(iVar6 + 4) == *(int *)(param_1 + 0x38) &&
                      ((iVar5 == 0 || (cVar3 = FUN_0048f070(iVar5,0), cVar3 == '\0')))))) &&
                    (*(char *)(local_14 + 0x164) == '\0')) && (*(char *)(iVar7 + 0x38) == '\0')) {
                  puVar2 = (undefined4 *)*local_1c;
                  local_9[0] = '\0';
                  do {
                    if (puVar2 == (undefined4 *)0x0) goto LAB_00829e5f;
                    piVar1 = (int *)*puVar2;
                    puVar2 = (undefined4 *)puVar2[2];
                    iVar6 = (**(code **)(*piVar1 + 0x2c))();
                  } while ((((iVar6 == local_14) || (iVar6 == iVar4)) ||
                           (iVar6 = *(int *)(*(int *)(iVar6 + 0xdc) + 0xe8), iVar6 == 0)) ||
                          ((iVar6 != local_10 && (cVar3 = FUN_004e0ac0(), cVar3 == '\0'))));
                  local_9[0] = '\x01';
LAB_00829e5f:
                  FUN_0082c4d0();
                  iVar7 = local_10;
                  iVar5 = local_20;
                  if (local_9[0] == '\0') {
                    *(undefined4 *)(local_14 + 0x1a8) = 0;
                    local_34 = iVar4;
                    FUN_004a81b0();
                    local_34 = iVar4;
                    FUN_009e6cc0(&local_34);
                    FUN_0082c4d0();
                    return;
                  }
                }
                iVar6 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                         *(int *)(param_1 + 0xdc) * 4) + 0xe8);
                if (((iVar6 != 0) && (iVar6 != iVar5)) && (iVar6 == iVar7)) {
                  *(undefined4 *)(iVar4 + 0x1a8) = *(undefined4 *)(local_14 + 0x1a8);
                  *(undefined4 *)(local_14 + 0x1a8) = 0;
                  param_1 = iVar4;
                  FUN_004a81b0();
                  param_1 = iVar4;
                  FUN_009e6cc0(&param_1);
                  return;
                }
              }
              local_34 = 0x49742400;
              iVar4 = FUN_0082c1d0(param_1,iVar4,&local_34);
              iVar6 = param_1;
              if (0 < iVar4) {
LAB_00829ece:
                FUN_0082e5d0(param_1);
                iVar6 = param_1;
              }
            }
          }
        }
LAB_00829ed8:
        if (local_30 == (undefined4 *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

