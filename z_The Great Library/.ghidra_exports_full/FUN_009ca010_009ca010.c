// FUN_009ca010 @ 009ca010 body=[[009ca010, 009ca036] [009ca040, 009ca13e]]


undefined1 * FUN_009ca010(undefined1 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_34;
  undefined8 local_33;
  undefined8 local_2b;
  undefined8 local_23;
  undefined4 local_1b;
  undefined2 local_17;
  undefined1 local_15;
  undefined1 *local_14 [4];
  
  iVar5 = 0;
  local_14[3] = (undefined1 *)0x0;
  iVar6 = 1;
  iVar7 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  for (iVar2 = iVar7; 999999 < iVar2; iVar2 = iVar2 / 1000) {
    iVar6 = iVar6 * 1000;
    iVar5 = iVar5 + 1;
  }
  puVar3 = &DAT_00ded94d;
  local_34 = '\0';
  local_33 = 0;
  local_2b = 0;
  local_23 = 0;
  local_1b = 0;
  local_17 = 0;
  local_15 = 0;
  local_14[0] = &DAT_00ded94d;
  local_14[1] = &DAT_00dfaa30;
  local_14[2] = &DAT_00e3afc8;
  if (iVar6 == 1) {
    if ((int)param_2 < 0) {
      puVar3 = &DAT_00dfe280;
    }
    _sprintf(&local_34,"%s%i",puVar3,iVar7);
  }
  else {
    local_14[3] = &DAT_00dfe280;
    if (-1 < (int)param_2) {
      local_14[3] = &DAT_00ded94d;
    }
    _sprintf(&local_34,"%s%i.%02i%s",local_14[3],iVar7 / iVar6,(iVar7 % iVar6) / (iVar6 / 100),
             local_14[iVar5]);
  }
  pcVar4 = &local_34;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&local_34,(int)pcVar4 - (int)&local_33);
  return param_1;
}

