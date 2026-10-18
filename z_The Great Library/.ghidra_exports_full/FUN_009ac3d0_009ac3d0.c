// FUN_009ac3d0 @ 009ac3d0 body=[[009ac3d0, 009ac467] [009ac46d, 009ac4d1]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined1 * FUN_009ac3d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int in_ECX;
  char *pcVar6;
  char *pcVar7;
  char local_1024 [4096];
  undefined4 local_24 [5];
  uint local_10;
  undefined4 local_8;
  
  local_8 = 0;
  piVar3 = (int *)FUN_00a72680(param_2,in_ECX + 4);
  uVar2 = *(uint *)(in_ECX + 0x34);
  pcVar6 = (char *)(in_ECX + 0x20);
  pcVar7 = pcVar6;
  if (0xf < uVar2) {
    pcVar7 = *(char **)pcVar6;
  }
  if (pcVar7[1] == 'd') {
    if (0xf < uVar2) {
      pcVar6 = *(char **)pcVar6;
    }
    pcVar5 = (char *)(**(code **)(*piVar3 + 0x10))();
    pcVar7 = pcVar6;
  }
  else {
    if (pcVar7[1] == 's') {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(local_24,param_3);
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      if (0xf < *(uint *)(in_ECX + 0x34)) {
        pcVar6 = *(char **)pcVar6;
      }
      _sprintf(local_1024,pcVar6,puVar4);
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_24[0]);
      }
      goto LAB_009ac48c;
    }
    if (0xf < uVar2) {
      pcVar6 = *(char **)pcVar6;
    }
    pcVar7 = "Unknown format: %s";
    pcVar5 = pcVar6;
  }
  _sprintf(local_1024,pcVar7,pcVar5);
LAB_009ac48c:
  pcVar6 = local_1024;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_1024,(int)pcVar6 - (int)(local_1024 + 1));
  return param_1;
}

