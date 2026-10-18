// FUN_006fe610 @ 006fe610 body=[[006fe610, 006fe6b5] [006fe6c0, 006fe7e0]]


int FUN_006fe610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int in_EDX;
  int iVar7;
  undefined1 local_3c [8];
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined1 local_24 [4];
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  bool local_5;
  
  local_14 = 0;
  if (-1 < in_EDX) {
    local_14 = *(int *)(param_1 + 0x60);
    for (; in_EDX != 0; in_EDX = in_EDX + -1) {
      local_14 = *(int *)(local_14 + 0x224);
    }
  }
  local_34 = *(uint *)(DAT_012588e8 + 0xb5c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_2c = *(uint *)(iVar1 + 0xe78);
  local_28 = *(int *)(iVar1 + 0xe7c);
  local_20 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x5c) * 4) + 0xe44);
  local_10 = 0;
  if (local_20 == (int *)0x0) {
    return 0;
  }
  do {
    local_18 = *local_20;
    local_c = 0;
    local_20 = (int *)local_20[2];
    iVar3 = *(int *)(local_18 + 0x60);
    while (iVar3 != 0) {
      local_1c = *(int *)(iVar3 + 0x224);
      cVar5 = FUN_0052d150();
      if (cVar5 != '\0') {
        iVar7 = 0;
        iVar4 = *(int *)(param_1 + 0x60);
        do {
          iVar2 = iVar4;
          if (iVar2 == 0) goto LAB_006fe706;
          iVar4 = *(int *)(iVar2 + 0x224);
        } while (*(int *)(iVar2 + 0x18) != *(int *)(iVar3 + 0x18));
        iVar7 = *(int *)(iVar2 + 0x20);
LAB_006fe706:
        FUN_004da850(*(int *)(iVar3 + 0x18),local_3c,iVar1,0,iVar1 + 0x1184,iVar7 + 1);
      }
      if (((local_14 == 0) || (*(int *)(iVar3 + 0x18) == *(int *)(local_14 + 0x18))) &&
         (cVar5 = FUN_0052d150(), cVar5 != '\0')) {
        local_5 = param_2 < 1;
        if (!local_5) {
          piVar6 = (int *)FUN_004f3820(local_24);
          local_5 = param_2 <= *piVar6;
        }
        iVar7 = 0;
        iVar4 = *(int *)(param_1 + 0x60);
        do {
          iVar2 = iVar4;
          if (iVar2 == 0) goto LAB_006fe787;
          iVar4 = *(int *)(iVar2 + 0x224);
        } while (*(int *)(iVar2 + 0x18) != *(int *)(iVar3 + 0x18));
        iVar7 = *(int *)(iVar2 + 0x20);
LAB_006fe787:
        FUN_004da850(*(int *)(iVar3 + 0x18),&local_34,iVar1,0,iVar1 + 0x1184,iVar7 + 1);
        if ((((local_34 != 0 || local_30 != 0) && (local_30 <= local_28)) &&
            ((local_30 < local_28 || (local_34 <= local_2c)))) && (local_5 != false)) {
          local_10 = local_10 + 1;
        }
      }
      local_c = local_c + 1;
      iVar3 = local_1c;
    }
    if (local_20 == (int *)0x0) {
      return local_10;
    }
  } while( true );
}

