// FUN_00a4ab70 @ 00a4ab70 body=[[00a4ab70, 00a4abec] [00a4abf0, 00a4ac80]]


uint FUN_00a4ab70(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int in_ECX;
  undefined2 *puVar4;
  int local_24 [8];
  
  if (param_2 == 0) {
    return 0;
  }
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 10;
  local_24[3] = 10;
  if (param_2 < 0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    param_2 = (int)pcVar2 - (int)(param_1 + 1);
  }
  _memset(&DAT_013f0980,0,0x1000);
  _strncpy((char *)&DAT_013f0980,param_1,0xfff);
  DAT_013f197f = 0;
  puVar4 = (undefined2 *)((int)&DAT_013f097c + 3);
  do {
    pcVar2 = (char *)((int)puVar4 + 1);
    puVar4 = (undefined2 *)((int)puVar4 + 1);
  } while (*pcVar2 != '\0');
  *puVar4 = 100;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
            (*(int **)(in_ECX + 0x30),0,&DAT_013f0980,param_2 + 1,local_24,0x400,0xffffffff);
  if (*(int *)(in_ECX + 0xb0) < 0) {
    local_24[6] = 10;
    local_24[7] = 10;
    local_24[4] = 0;
    local_24[5] = 0;
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
              (*(int **)(in_ECX + 0x30),0,&DAT_00e0d294,1,local_24 + 4,0x400,0xffffffff);
    *(int *)(in_ECX + 0xb0) = local_24[6] - local_24[4];
  }
  uVar3 = (local_24[2] - *(int *)(in_ECX + 0xb0)) - local_24[0];
  return uVar3 & ((int)uVar3 < 0) - 1;
}

