// FUN_009c9c70 @ 009c9c70 body=[[009c9c70, 009c9e11]]


undefined1 * FUN_009c9c70(undefined1 *param_1,int param_2)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  uVar3 = 1;
  for (uVar4 = in_EAX; 999 < uVar4; uVar4 = uVar4 / 1000) {
    uVar3 = uVar3 * 1000;
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
  local_2c[0] = "%s%u%s";
  local_2c[1] = "%s%u.%.1s%s";
  local_2c[2] = "%s%u.%.2s%s";
  local_2c[3] = "%s%u.%.3s%s";
  local_1c = "%s%u.%.4s%s";
  if (uVar3 == 1) {
    _sprintf(local_80 + 0x20,"%s%u",&DAT_00ded94d);
  }
  else {
    if (param_2 < 5) {
      if (param_2 < 1) {
        _sprintf(local_80 + 0x20,local_2c[param_2],&DAT_00ded94d,in_EAX / uVar3,local_18[iVar5]);
        goto LAB_009c9ddf;
      }
    }
    else {
      param_2 = 4;
    }
    local_40[0] = &DAT_00e3b02c;
    local_40[1] = &DAT_00e3b02c;
    local_40[2] = &DAT_00e3b034;
    local_40[3] = &DAT_00e3b03c;
    local_30 = "%.12i";
    local_80[0] = '\0';
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
    local_80[0x19] = '\0';
    local_80[0x1a] = '\0';
    local_80[0x1b] = '\0';
    local_80[0x1c] = '\0';
    local_80[0x1d] = '\0';
    local_80[0x1e] = '\0';
    local_80[0x1f] = 0;
    _sprintf(local_80,local_40[iVar5],in_EAX % uVar3);
    _sprintf(local_80 + 0x20,local_2c[param_2],&DAT_00ded94d,in_EAX / uVar3,local_80,local_18[iVar5]
            );
  }
LAB_009c9ddf:
  pcVar2 = local_80 + 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_80 + 0x20,(int)pcVar2 - (int)&local_5f);
  return param_1;
}

