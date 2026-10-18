// FUN_00a8b1f0 @ 00a8b1f0 body=[[00a8b1f0, 00a8b2d6]]


SOCKET FUN_00a8b1f0(undefined4 *param_1)

{
  u_short uVar1;
  SOCKET s;
  int iVar2;
  sockaddr local_24;
  char local_14 [4];
  u_long local_10;
  char local_c [8];
  
  s = socket(2,2,0);
  local_10 = 1;
  local_c[0] = '\0';
  local_c[1] = '\0';
  local_c[2] = '\x04';
  local_c[3] = '\0';
  local_14[0] = '\x01';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  if (s != 0xffffffff) {
    ioctlsocket(s,-0x7ffb9982,&local_10);
    setsockopt(s,0xffff,0x1002,local_c,4);
    setsockopt(s,0xffff,0x20,local_14,4);
    setsockopt(s,0xffff,0x1001,local_c,4);
    local_24.sa_data[6] = '\0';
    local_24.sa_data[7] = '\0';
    local_24.sa_data[8] = '\0';
    local_24.sa_data[9] = '\0';
    local_24.sa_data[10] = '\0';
    local_24.sa_data[0xb] = '\0';
    local_24.sa_data[0xc] = '\0';
    local_24.sa_data[0xd] = '\0';
    local_24.sa_family = 2;
    local_24.sa_data[0] = '\0';
    local_24.sa_data[1] = '\0';
    local_24.sa_data[2] = '\0';
    local_24.sa_data[3] = '\0';
    local_24.sa_data[4] = '\0';
    local_24.sa_data[5] = '\0';
    if (param_1 == (undefined4 *)0x0) {
      local_24.sa_family = 2;
      local_24.sa_data[0] = '\0';
      local_24.sa_data[1] = '\0';
      local_24.sa_data[2] = '\0';
      local_24.sa_data[3] = '\0';
      local_24.sa_data[4] = '\0';
      local_24.sa_data[5] = '\0';
    }
    else {
      uVar1 = htons(*(u_short *)(param_1 + 1));
      local_24.sa_data[0] = (char)uVar1;
      local_24.sa_data[1] = (char)(uVar1 >> 8);
      local_24.sa_data._2_4_ = *param_1;
    }
    iVar2 = bind(s,&local_24,0x10);
    if (iVar2 != -1) {
      return s;
    }
    closesocket(s);
  }
  return 0xffffffff;
}

