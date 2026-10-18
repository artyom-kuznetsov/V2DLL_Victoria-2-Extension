// FUN_007db560 @ 007db560 body=[[007db560, 007db5d7]]


bool FUN_007db560(short *param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  undefined1 local_30 [32];
  int local_10;
  int local_c;
  
  uVar2 = *(uint *)(in_ECX + 0xa8);
  if ((uVar2 == 0xffffffff) || (9999 < uVar2)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(uVar2 * 0x2c + 4 + *(int *)(in_ECX + 0x44));
  }
  (**(code **)(*piVar3 + 0x4c))(piVar3,0,&local_10,0,0x10);
  (**(code **)(*piVar3 + 0x44))(piVar3,0,local_30);
  cVar1 = *(char *)(param_1[1] * local_10 + local_c + 2 + *param_1 * 4);
  (**(code **)(*piVar3 + 0x50))(piVar3,0);
  return cVar1 == '\0';
}

