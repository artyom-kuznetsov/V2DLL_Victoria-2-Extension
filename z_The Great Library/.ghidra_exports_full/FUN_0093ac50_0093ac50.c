// FUN_0093ac50 @ 0093ac50 body=[[0093ac50, 0093ae0f]]


void FUN_0093ac50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int *in_ECX;
  int iVar7;
  int local_1c;
  
  iVar7 = *in_ECX;
  local_1c = in_ECX[1] - iVar7 >> 3;
  bVar5 = true;
  if (0 < local_1c) {
    do {
      if (bVar5) {
        iVar1 = *(int *)(iVar7 + 4);
        iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4);
        iVar3 = *(int *)(*(int *)(iVar2 + 0xbe8) + iVar1 * 4);
        if ((((((*(char *)(iVar2 + 0xcf5) == '\0') && (*(char *)(iVar2 + 0xcf4) == '\0')) &&
              (cVar6 = FUN_00534000(), cVar6 != '\0')) ||
             (((*(int *)(iVar3 + 0x28) != 0 &&
               (*(int *)(*(int *)(iVar3 + 0x28) + 0xc) == *(int *)(iVar3 + 0xc))) ||
              ((*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0 &&
               ((cVar6 = FUN_0042b220(), cVar6 != '\0' || (cVar6 = FUN_0042b220(), cVar6 != '\0'))))
              )))) || ((*(int *)(iVar3 + 0x20) != 0 &&
                       (((*(char *)(iVar2 + 0xcf5) == '\0' && (*(char *)(iVar2 + 0xcf4) == '\0')) ||
                        (*(int *)(iVar2 + 0xcfc) != iVar1)))))) || (*(char *)(iVar3 + 0x70) != '\0')
           ) goto LAB_0093adf2;
        if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
          piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4) +
                            0x7b4);
          do {
            if (piVar4 == (int *)0x0) {
              if ((*(int *)(iVar2 + 0x142c) == 0) || (cVar6 = FUN_0042bb00(), cVar6 == '\0'))
              goto LAB_0093adee;
              break;
            }
            iVar3 = *piVar4;
            piVar4 = (int *)piVar4[2];
          } while (*(int *)(*(int *)(iVar3 + 0xdc) + 300) != iVar1);
          goto LAB_0093adf2;
        }
LAB_0093adee:
        bVar5 = true;
      }
      else {
LAB_0093adf2:
        bVar5 = false;
      }
      iVar7 = iVar7 + 8;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

