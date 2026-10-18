// FUN_00443890 @ 00443890 body=[[00443890, 004438de]]


undefined4 FUN_00443890(void)

{
  int in_EAX;
  
  if (((((*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) & 0xfffffffcU) != 0) &&
       ((*(int *)(in_EAX + 0x18) - *(int *)(in_EAX + 0x14) & 0xfffffffcU) != 0)) &&
      ((*(int *)(in_EAX + 0x28) - *(int *)(in_EAX + 0x24) & 0xfffffffcU) != 0)) &&
     (((*(int *)(in_EAX + 0x38) - *(int *)(in_EAX + 0x34) & 0xfffffffcU) != 0 &&
      ((*(int *)(in_EAX + 0x48) - *(int *)(in_EAX + 0x44) & 0xfffffffcU) != 0)))) {
    return 1;
  }
  return 0;
}

