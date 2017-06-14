#ifndef __SLIBS_CORE_STREAM_H
#define __SLIBS_CORE_STREAM_H 1

class Stream {

protected:
	Stream();
public:
	virtual ~Stream();
	void operator << (const char*);
	void operator << (std::string &std_str);
	void operator << (Stream &stream);
	void operator >> (Stream &stream);
	void close();

	void writeInt32(int32 &val);
	int32 readBin(void* buf,int len);
	virtual bool  readInt32(int32 &val);
	virtual void writeBin(const char* bytes,int len);
};

#endif