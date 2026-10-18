// FUN_004ec290 @ 004ec290 body=[[004ec290, 004ec423]]


int FUN_004ec290(int param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int *local_68;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined1 local_50 [20];
  int local_3c;
  
  iVar4 = *(int *)(param_2 + 100);
  if ((*(int *)(iVar4 + 0x110) == 0) ||
     (iVar1 = *(int *)(*(int *)(iVar4 + 0x110) + 0x10),
     (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 1)) {
    pcVar3 = (char *)(iVar4 + 0x130);
  }
  else {
    pcVar3 = *(char **)(iVar1 + 0x34);
  }
  if ((((*pcVar3 == 'R') && (pcVar3[1] == 'E')) && (pcVar3[2] == 'B')) &&
     ((iVar4 = FUN_0068bb30(iVar4), iVar4 != 0 && (cVar2 = FUN_004e8bd0(), cVar2 != '\0')))) {
    return *(int *)(iVar4 + 0x30);
  }
  local_6c = FUN_009665d0(param_2);
  FUN_008a8650(0);
  piVar6 = *(int **)(param_1 + 0xc);
  local_3c = param_2;
  local_78 = 0;
  local_70 = -1000;
  do {
    while( true ) {
      do {
        if ((piVar6 < *(int **)(param_1 + 0xc)) || (*(int **)(param_1 + 0x10) <= piVar6)) {
          return local_78;
        }
        iVar4 = *piVar6;
        piVar6 = piVar6 + 1;
      } while ((((*(char *)(iVar4 + 0x12e) == '\0') && (local_6c != *(int *)(iVar4 + 0x130))) ||
               (local_68 = piVar6, FUN_004eaa30(iVar4,&local_74,local_50), local_74 == 0)) ||
              ((local_74 <= local_70 && (local_78 != 0))));
      if (param_3 == '\0') break;
LAB_004ec406:
      local_70 = local_74;
      local_78 = iVar4;
    }
    if (*(int *)(iVar4 + 0x100) == 6) {
      iVar1 = *(int *)(param_2 + 100);
      piVar6 = local_68;
      if (iVar1 != 0) {
        local_58 = *(undefined4 *)(iVar1 + 0x128);
        iVar5 = FUN_0050e450();
        piVar6 = local_68;
        if ((iVar5 != 0) && (*(int *)(iVar1 + 0xe8) != iVar5)) goto LAB_004ec3d4;
      }
      goto LAB_004ec406;
    }
LAB_004ec3d4:
    FUN_004ead40(iVar4,local_60,*(undefined4 *)(param_2 + 100),param_2,1);
    if (local_5c != 0) {
      local_70 = local_74;
      local_78 = iVar4;
    }
  } while( true );
}

