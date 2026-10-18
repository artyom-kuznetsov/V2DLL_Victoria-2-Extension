// FUN_00ad33b0 @ 00ad33b0 body=[[00ad33b0, 00ad3461]]


void FUN_00ad33b0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int in_ECX;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b36cf8;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar3 - (int)(param_1 + 1));
  FUN_00b14950(&DAT_00dedc78,&DAT_00dedc68);
  if (*(int *)(in_ECX + 0x1c) != 0) {
    puVar4 = (undefined4 *)FUN_00b14c90(local_18,1);
    local_4 = 0;
    if (puVar4 != (undefined4 *)(in_ECX + 0x18)) {
      puVar5 = (undefined1 *)*puVar4;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00ded94d;
      }
      FUN_00b137d0(puVar5,puVar4[1]);
    }
    local_4 = 0xffffffff;
    FUN_00b13650(uVar2);
  }
  ExceptionList = local_c;
  return;
}

