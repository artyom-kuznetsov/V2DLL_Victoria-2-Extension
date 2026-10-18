// FUN_00b1e000 @ 00b1e000 body=[[00b1e000, 00b1e040]]


void FUN_00b1e000(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x14) = 7;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00b19cc0(pcVar2 + (1 - (int)(param_1 + 1)));
  FID_conflict__memcpy(*(void **)(in_ECX + 4),param_1,(size_t)(pcVar2 + (1 - (int)(param_1 + 1))));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}

