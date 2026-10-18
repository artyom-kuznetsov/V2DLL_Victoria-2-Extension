// FUN_009d2910 @ 009d2910 body=[[009d2910, 009d2a99]]


undefined1 * FUN_009d2910(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 local_1ec [256];
  undefined4 local_ec [26];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5db38;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0;
  local_74 = 0;
  local_70 = 0;
  local_84 = 0x67452301;
  local_80 = 0xefcdab89;
  local_7c = 0x98badcfe;
  local_78 = 0x10325476;
  ExceptionList = &local_10;
  _memset(local_1ec,0,0xff);
  FUN_009d2700(local_1ec);
  FUN_00a1d420(local_1ec);
  local_18 = **(int **)(param_1 + 0x94);
  if ((int *)local_18 != *(int **)(param_1 + 0x94)) {
    do {
      iVar4 = local_18;
      piVar7 = (int *)(local_18 + 0x4c);
      piVar2 = piVar7;
      if (0xf < *(uint *)(local_18 + 0x60)) {
        piVar2 = (int *)*piVar7;
      }
      if (((piVar2 != (int *)0x0) && ((char)*piVar2 != '\0')) &&
         (iVar3 = PHYSFS_exists(piVar2), iVar3 != 0)) {
        if (0xf < *(uint *)(iVar4 + 0x60)) {
          piVar7 = (int *)*piVar7;
        }
        iVar4 = PHYSFS_openRead(piVar7);
        local_8 = 0;
        local_14 = iVar4;
        FUN_00a1d690();
        local_8 = 0xffffffff;
        if (iVar4 != 0) {
          PHYSFS_close(iVar4);
        }
      }
      FUN_009d3e90();
    } while (local_18 != *(int *)(param_1 + 0x94));
  }
  pcVar6 = "DontStealMyGamePlz__WINNERS_DONT_USE_DRUGS__DONT_COPY_THAT_FLOPPY";
  puVar8 = local_ec;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
  FUN_00a1d420(local_ec);
  FUN_00a1d6f0();
  pcVar5 = (char *)FUN_00a1d7c0(&local_84);
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  pcVar6 = pcVar5;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
  ExceptionList = local_10;
  return param_2;
}

