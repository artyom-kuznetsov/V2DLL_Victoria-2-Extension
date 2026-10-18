// FUN_00b0a870 @ 00b0a870 body=[[00b0a870, 00b0a87c] [00b0a880, 00b0a8b7]]


void FUN_00b0a870(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  puVar3 = *(undefined1 **)(DAT_00f209e0 + 0x18);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_00ded94d;
  }
  FUN_00b14950(puVar3,"$(MEDIAROOT)");
  return;
}

