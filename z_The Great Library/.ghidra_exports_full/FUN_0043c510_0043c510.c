// FUN_0043c510 @ 0043c510 body=[[0043c510, 0043c57e]]


void FUN_0043c510(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int in_ECX;
  undefined1 *puVar4;
  
  puVar2 = (undefined1 *)FUN_00aae9af(0x20);
  puVar4 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0xf;
    *puVar2 = 0;
    puVar4 = puVar2;
  }
  pcVar3 = (char *)(param_1 + 0x24);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar3 - (param_1 + 0x25));
  puVar4[0x1c] = *(int *)(param_1 + 0x228) == 0x29f;
  (**(code **)(*(int *)(in_ECX + -0x24) + 0x18))(puVar4,puVar4);
  return;
}

