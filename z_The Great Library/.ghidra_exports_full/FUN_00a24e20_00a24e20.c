// FUN_00a24e20 @ 00a24e20 body=[[00a24e20, 00a24f87]]


int FUN_00a24e20(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  uint *puVar7;
  int iVar8;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = param_2;
  if (param_2 < 0) {
    pcVar4 = param_1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    local_10 = (int)pcVar4 - (int)(param_1 + 1);
  }
  cVar3 = (**(code **)(*in_ECX + 0x4c))();
  if (local_10 < 1) {
    local_c = 0;
  }
  else {
    do {
      if (cVar3 == '\0') {
LAB_00a24ee3:
        iVar5 = in_ECX[(byte)param_1[iVar8] + 0x25];
        if (iVar5 == 0) {
          if (param_1[iVar8] == 10) {
            if (local_c < local_8) {
              local_c = local_8;
            }
            local_8 = 0;
          }
        }
        else {
          local_8 = local_8 + *(int *)(iVar5 + 0x18);
          iVar2 = *(int *)(iVar5 + 0x81c);
          if (((iVar2 != 0) && (iVar8 + 1 < local_10)) && (iVar6 = 0, 0 < iVar2)) {
            puVar7 = (uint *)(iVar5 + 0x1c);
            do {
              if (*puVar7 == (uint)(byte)param_1[iVar8 + 1]) {
                local_8 = local_8 + *(int *)(iVar5 + 0x20 + iVar6 * 8);
                break;
              }
              iVar6 = iVar6 + 1;
              puVar7 = puVar7 + 2;
            } while (iVar6 < iVar2);
          }
          if ((*(int *)(iVar5 + 0xc) == 0) && (local_c < local_8)) {
            local_c = local_8;
          }
        }
      }
      else {
        cVar1 = param_1[iVar8];
        if (cVar1 == -0x59) {
          iVar8 = iVar8 + 1;
        }
        else if (cVar1 == '@') {
          iVar8 = iVar8 + 3;
          iVar5 = (**(code **)(*in_ECX + 0x68))();
          local_8 = local_8 + iVar5;
        }
        else if (cVar1 == -0x5d) {
          for (iVar5 = iVar8 + 2;
              ((((cVar1 = param_1[iVar5 + -1], '@' < cVar1 && (cVar1 < '[')) ||
                (('`' < cVar1 && (cVar1 < '{')))) || (cVar1 == '_')) && (iVar5 <= local_10));
              iVar5 = iVar5 + 1) {
            iVar8 = iVar8 + 1;
          }
          iVar5 = (**(code **)(*in_ECX + 100))();
          local_8 = local_8 + iVar5;
        }
        else if (cVar1 == -0x5c) {
          local_8 = local_8 + 8;
        }
        else {
          if (cVar1 != '{') goto LAB_00a24ee3;
          local_8 = local_8 + 8;
          iVar8 = iVar8 + 2;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_10);
    if (local_c < local_8) {
      return local_8;
    }
  }
  return local_c;
}

