// FUN_009c9b50 @ 009c9b50 body=[[009c9b50, 009c9c62]]


undefined1 * FUN_009c9b50(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  uVar3 = 1;
  for (uVar4 = in_EAX; 999 < uVar4; uVar4 = uVar4 / 1000) {
    uVar3 = uVar3 * 1000;
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
  if (uVar3 == 1) {
    _sprintf(&local_38,&DAT_00e3afcc,param_2,&DAT_00ded94d);
  }
  else {
    _sprintf(&local_38,&DAT_00e3afd8,param_2,&DAT_00ded94d,in_EAX / uVar3,
             (int)(((ulonglong)in_EAX % (ulonglong)uVar3) / (ulonglong)(uint)((int)uVar3 / 100)),
             param_3,local_18[iVar5]);
  }
  pcVar2 = &local_38;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&local_38,(int)pcVar2 - (int)&local_37);
  return param_1;
}

