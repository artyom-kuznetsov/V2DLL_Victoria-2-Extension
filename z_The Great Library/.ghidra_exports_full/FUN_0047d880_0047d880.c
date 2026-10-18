// FUN_0047d880 @ 0047d880 body=[[0047d880, 0047d8f6]]


void FUN_0047d880(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 *puVar6;
  
  puVar3 = (undefined1 *)FUN_00aae9af(0x20);
  iVar2 = param_1;
  puVar6 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    puVar6 = puVar3;
  }
  pcVar4 = (char *)(param_1 + 0x24);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar4 - (param_1 + 0x25));
  puVar5 = (undefined4 *)FUN_0098fb60(iVar2 + 0x228,&param_1);
  *(undefined4 *)(puVar6 + 0x1c) = *puVar5;
  (**(code **)(*(int *)(in_ECX + -0x24) + 0x18))(puVar6,puVar6);
  return;
}

