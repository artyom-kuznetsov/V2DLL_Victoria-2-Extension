// FUN_00a8d710 @ 00a8d710 body=[[00a8d710, 00a8d7a8] [00a8d7b0, 00a8d938]]


void FUN_00a8d710(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_18;
  int local_14;
  
  iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
  local_14 = iVar3 + -1;
  iVar2 = param_2 * 0x18;
  iVar7 = *(int *)(iVar2 + 0xc + *(int *)(in_ECX + 4));
  if (*(int *)(in_ECX + 0x14) < param_3) {
    param_3 = *(int *)(in_ECX + 0x14);
  }
  iVar5 = param_3 - param_3 % *(int *)(iVar2 + *(int *)(in_ECX + 4) + 0xc);
  iVar3 = FUN_00aad56b(iVar3);
  iVar6 = 0;
  if (0 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18) {
    do {
      *(undefined1 *)(iVar6 + iVar3) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18);
  }
  iVar6 = iVar2 + *(int *)(in_ECX + 4);
  if ((*(int *)(iVar6 + 8) < *(int *)(iVar2 + *(int *)(in_ECX + 4)) + iVar7) ||
     (*(char *)(iVar6 + 0x14) != '\0')) {
    FUN_00aaea59(iVar3);
    *param_1 = *(undefined4 *)(iVar2 + *(int *)(in_ECX + 4));
    return;
  }
  param_3 = iVar5;
  if (0 < iVar5) {
    do {
      if (local_14 < 1) break;
      iVar7 = 0;
      if (0 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18) {
        local_18 = 0;
LAB_00a8d835:
        if ((iVar7 != param_2) && (*(char *)(iVar7 + iVar3) == '\0')) {
          piVar4 = (int *)(local_18 + *(int *)(in_ECX + 4));
          if ((char)piVar4[5] == '\0') {
            iVar6 = *piVar4;
            iVar1 = piVar4[3];
            if (piVar4[1] <= iVar6 - iVar1) {
              if (*(int *)(in_ECX + 0x18) == iVar7) {
                *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
                goto LAB_00a8d8ad;
              }
              if (param_3 < iVar1) {
                *piVar4 = iVar6 - param_3;
                param_3 = 0;
              }
              else {
                *piVar4 = iVar6 - iVar1;
                param_3 = param_3 - *(int *)(local_18 + *(int *)(in_ECX + 4) + 0xc);
              }
              *(int *)(in_ECX + 0x18) = iVar7;
              bVar8 = true;
              if (param_3 == 0) goto LAB_00a8d8d6;
              goto LAB_00a8d8ad;
            }
          }
          local_14 = local_14 + -1;
          *(undefined1 *)(iVar7 + iVar3) = 1;
        }
LAB_00a8d8ad:
        local_18 = local_18 + 0x18;
        iVar7 = iVar7 + 1;
        if ((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18 <= iVar7) goto LAB_00a8d8d2;
        goto LAB_00a8d835;
      }
LAB_00a8d8d2:
      bVar8 = param_3 == 0;
LAB_00a8d8d6:
    } while (!bVar8 && -1 < param_3);
  }
  FUN_00aaea59(iVar3);
  *(int *)(*(int *)(in_ECX + 4) + iVar2) =
       *(int *)(*(int *)(in_ECX + 4) + iVar2) + (iVar5 - param_3);
  *param_1 = *(undefined4 *)(iVar2 + *(int *)(in_ECX + 4));
  return;
}

