import os 

root_path = os.path.abspath(os.path.join(os.getcwd(),os.path.pardir))
aosp_path = "/media/death/60bd38fc-5610-4622-88bb-c4af2be4e99b/aosp/aosp_10"
service_related_file_list_path = os.path.join(root_path,"workdir","service-related-file","service_related_file.txt")
service_related_file_list = open(service_related_file_list_path)
for tmp_path in service_related_file_list:
    line= 1
    tmp_path = tmp_path.replace("\n","")
    tar_path = os.path.join(aosp_path,tmp_path)
    tar_file = open(tar_path)
    for tmp_line in tar_file:
        if ("case" in tmp_line) & ("{" not in tmp_line):
            print(tar_path)
            print(line)
        line = line + 1
