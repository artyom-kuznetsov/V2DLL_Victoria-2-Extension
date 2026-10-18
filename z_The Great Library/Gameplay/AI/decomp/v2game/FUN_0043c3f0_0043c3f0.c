// FUN_0043c3f0 @ 0043c3f0 body=[[0043c3f0, 0043c444]]


undefined1 * FUN_0043c3f0(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *unaff_EDI;
  
  puVar2 = (undefined1 *)FUN_00aae9af(0x20);
  puVar4 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0xf;
    *puVar2 = 0;
    puVar4 = puVar2;
  }
  puVar4[0x1c] = 1;
  pcVar3 = unaff_EDI;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(unaff_EDI,(int)pcVar3 - (int)(unaff_EDI + 1));
  (**(code **)(*param_1 + 0x18))(puVar4,puVar4);
  return puVar4;
}

