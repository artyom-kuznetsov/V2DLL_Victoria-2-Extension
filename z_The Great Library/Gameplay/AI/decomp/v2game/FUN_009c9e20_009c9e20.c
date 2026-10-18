// FUN_009c9e20 @ 009c9e20 body=[[009c9e20, 009c9e46] [009c9e50, 009ca00d]]


undefined1 * FUN_009c9e20(undefined1 *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_80 [33];
  undefined8 local_5f;
  undefined8 local_57;
  undefined8 local_4f;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined *local_40 [4];
  char *local_30;
  char *local_2c [4];
  char *local_1c;
  undefined *local_18 [4];
  undefined4 local_8;
  
  iVar5 = 0;
  local_8 = 0;
  iVar6 = 1;
  iVar7 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  for (iVar2 = iVar7; 999 < iVar2; iVar2 = iVar2 / 1000) {
    iVar6 = iVar6 * 1000;
    iVar5 = iVar5 + 1;
  }
  local_80[0x20] = 0;
  local_5f = 0;
  local_57 = 0;
  local_4f = 0;
  local_47 = 0;
  local_43 = 0;
  local_41 = 0;
  local_18[0] = &DAT_00ded94d;
  local_18[1] = &DAT_00e3afc4;
  local_18[2] = &DAT_00dfaa30;
  local_18[3] = &DAT_00e3afc8;
  local_2c[0] = "%s%i%s";
  local_2c[1] = "%s%i.%.1s%s";
  local_2c[2] = "%s%i.%.2s%s";
  local_2c[3] = "%s%i.%.3s%s";
  local_1c = "%s%i.%.4s%s";
  if (iVar6 == 1) {
    puVar3 = &DAT_00dfe280;
    if (-1 < (int)param_2) {
      puVar3 = &DAT_00ded94d;
    }
    _sprintf(local_80 + 0x20,"%s%i",puVar3,iVar7);
  }
  else {
    if (param_3 < 5) {
      if (param_3 < 1) {
        puVar3 = &DAT_00dfe280;
        if (-1 < (int)param_2) {
          puVar3 = &DAT_00ded94d;
        }
        _sprintf(local_80 + 0x20,local_2c[param_3],puVar3,iVar7 / iVar6,local_18[iVar5]);
        goto LAB_009c9fd0;
      }
    }
    else {
      param_3 = 4;
    }
    local_80[0] = '\0';
    local_80[0x19] = '\0';
    local_80[0x1a] = '\0';
    local_80[0x1b] = '\0';
    local_80[0x1c] = '\0';
    local_80[0x1d] = '\0';
    local_80[0x1e] = '\0';
    local_80[0x1f] = 0;
    local_40[0] = &DAT_00e3b02c;
    local_40[1] = &DAT_00e3b02c;
    local_40[2] = &DAT_00e3b034;
    local_40[3] = &DAT_00e3b03c;
    local_30 = "%.12i";
    local_80[1] = '\0';
    local_80[2] = '\0';
    local_80[3] = '\0';
    local_80[4] = '\0';
    local_80[5] = '\0';
    local_80[6] = '\0';
    local_80[7] = '\0';
    local_80[8] = '\0';
    local_80[9] = '\0';
    local_80[10] = '\0';
    local_80[0xb] = '\0';
    local_80[0xc] = '\0';
    local_80[0xd] = '\0';
    local_80[0xe] = '\0';
    local_80[0xf] = '\0';
    local_80[0x10] = '\0';
    local_80[0x11] = '\0';
    local_80[0x12] = '\0';
    local_80[0x13] = '\0';
    local_80[0x14] = '\0';
    local_80[0x15] = '\0';
    local_80[0x16] = '\0';
    local_80[0x17] = '\0';
    local_80[0x18] = '\0';
    _sprintf(local_80,local_40[iVar5],iVar7 % iVar6);
    puVar3 = &DAT_00dfe280;
    if (-1 < (int)param_2) {
      puVar3 = &DAT_00ded94d;
    }
    _sprintf(local_80 + 0x20,local_2c[param_3],puVar3,iVar7 / iVar6,local_80,local_18[iVar5]);
  }
LAB_009c9fd0:
  pcVar4 = local_80 + 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_80 + 0x20,(int)pcVar4 - (int)&local_5f);
  return param_1;
}

