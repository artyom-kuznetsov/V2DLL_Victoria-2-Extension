// FUN_00a8d940 @ 00a8d940 body=[[00a8d940, 00a8d9c9] [00a8d9d0, 00a8db39]]


void FUN_00a8d940(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_1c;
  int local_18;
  
  iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
  local_18 = iVar3 + -1;
  iVar2 = param_2 * 0x18;
  iVar7 = *(int *)(iVar2 + 0xc + *(int *)(in_ECX + 4));
  iVar5 = param_3 - param_3 % iVar7;
  iVar3 = FUN_00aad56b(iVar3);
  iVar6 = 0;
  if (0 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18) {
    do {
      *(undefined1 *)(iVar6 + iVar3) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18);
  }
  iVar6 = iVar2 + *(int *)(in_ECX + 4);
  if ((*(int *)(iVar6 + 4) <= iVar7 + *(int *)(iVar2 + *(int *)(in_ECX + 4))) &&
     (*(char *)(iVar6 + 0x14) == '\0')) {
    iVar7 = iVar5;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (local_18 < 1) break;
        iVar6 = 0;
        if (0 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18) {
          local_1c = 0;
          do {
            if ((iVar6 != param_2) && (*(char *)(iVar6 + iVar3) == '\0')) {
              piVar4 = (int *)(*(int *)(in_ECX + 4) + local_1c);
              if (((char)piVar4[5] == '\0') && (iVar1 = *piVar4, piVar4[3] + iVar1 <= piVar4[2])) {
                if (*(int *)(in_ECX + 0x18) == iVar6) {
                  *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
                }
                else {
                  if (iVar7 < piVar4[3]) {
                    *piVar4 = iVar1 + iVar7;
                    iVar7 = 0;
                  }
                  else {
                    *piVar4 = piVar4[3] + iVar1;
                    iVar7 = param_3 - *(int *)(local_1c + *(int *)(in_ECX + 4) + 0xc);
                  }
                  *(int *)(in_ECX + 0x18) = iVar6;
                  bVar8 = true;
                  param_3 = iVar7;
                  if (iVar7 == 0) goto LAB_00a8dafb;
                }
              }
              else {
                local_18 = local_18 + -1;
                *(undefined1 *)(iVar6 + iVar3) = 1;
                iVar7 = param_3;
              }
            }
            local_1c = local_1c + 0x18;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18);
        }
        bVar8 = iVar7 == 0;
LAB_00a8dafb:
      } while (!bVar8 && -1 < iVar7);
    }
    piVar4 = (int *)(iVar2 + *(int *)(in_ECX + 4));
    *piVar4 = *piVar4 - (iVar5 - iVar7);
  }
  FUN_00aaea59(iVar3);
  *param_1 = *(undefined4 *)(iVar2 + *(int *)(in_ECX + 4));
  return;
}

