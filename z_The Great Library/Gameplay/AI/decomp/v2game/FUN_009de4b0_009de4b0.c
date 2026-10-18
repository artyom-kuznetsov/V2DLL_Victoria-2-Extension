// FUN_009de4b0 @ 009de4b0 body=[[009de4b0, 009de525]]


void FUN_009de4b0(void)

{
  code *pcVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x1be) != '\0') {
    pcVar1 = *(code **)(*(int *)(in_ECX + -0x14c) + 0xf0);
    *(undefined1 *)(in_ECX + 0x1be) = 0;
    (*pcVar1)(*(undefined4 *)(in_ECX + 0xa8),in_ECX + 0x70,in_ECX + 0x8c,in_ECX + 0x38,
              *(undefined2 *)(in_ECX + 0x60),*(undefined2 *)(in_ECX + 0x62),
              *(undefined4 *)(in_ECX + 100),*(undefined4 *)(in_ECX + 0x68),
              *(undefined4 *)(in_ECX + 0xc4),*(undefined1 *)(in_ECX + 0x1bd));
  }
  FUN_009de530();
  return;
}

