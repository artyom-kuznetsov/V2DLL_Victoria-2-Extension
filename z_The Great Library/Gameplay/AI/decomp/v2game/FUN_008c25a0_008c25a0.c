// FUN_008c25a0 @ 008c25a0 body=[[008c25a0, 008c25ca]]


void FUN_008c25a0(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &stack0x00000008;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  return;
}

