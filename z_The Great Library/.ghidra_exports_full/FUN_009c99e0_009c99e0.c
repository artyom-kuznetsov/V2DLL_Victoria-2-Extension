// FUN_009c99e0 @ 009c99e0 body=[[009c99e0, 009c9a06] [009c9a10, 009c9b41]]


undefined1 *
FUN_009c99e0(undefined1 *param_1,uint param_2,undefined1 *param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_38;
  undefined8 local_37;
  undefined8 local_2f;
  undefined8 local_27;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  undefined *local_18 [4];
  undefined4 local_8;
  
  iVar5 = 0;
  local_8 = 0;
  iVar7 = 1;
  iVar6 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  for (iVar2 = iVar6; 999 < iVar2; iVar2 = iVar2 / 1000) {
    iVar7 = iVar7 * 1000;
    iVar5 = iVar5 + 1;
  }
  local_38 = '\0';
  local_37 = 0;
  local_2f = 0;
  local_27 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_18[0] = &DAT_00ded94d;
  local_18[1] = &DAT_00e3afc4;
  local_18[2] = &DAT_00dfaa30;
  local_18[3] = &DAT_00e3afc8;
  if ((param_5 != '\0') && (param_3 = &DAT_00df8510, -1 < (int)param_2)) {
    param_3 = &DAT_00df8518;
  }
  if (iVar7 == 1) {
    puVar3 = &DAT_00dfe280;
    if (-1 < (int)param_2) {
      puVar3 = &DAT_00ded94d;
    }
    _sprintf(&local_38,&DAT_00e3afcc,param_3,puVar3,iVar6);
  }
  else {
    _param_5 = &DAT_00dfe280;
    if (-1 < (int)param_2) {
      _param_5 = &DAT_00ded94d;
    }
    _sprintf(&local_38,&DAT_00e3afd8,param_3,_param_5,iVar6 / iVar7,(iVar6 % iVar7) / (iVar7 / 100),
             param_4,local_18[iVar5]);
  }
  pcVar4 = &local_38;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&local_38,(int)pcVar4 - (int)&local_37);
  return param_1;
}

