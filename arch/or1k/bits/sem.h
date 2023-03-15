struct semid_ds {
	struct ipc_perm sem_perm;
	time_t sem_otime;
	time_t __unused1;
	time_t sem_ctime;
	time_t __unused2;
	char __sem_nsems_pad[sizeof(time_t)-sizeof(short)];
	unsigned short sem_nsems;
	time_t __unused3;
	time_t __unused4;
};
