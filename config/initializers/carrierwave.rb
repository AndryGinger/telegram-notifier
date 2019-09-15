module RemoteUploader
  def filename_from_header
    if file.meta.include? 'content-disposition'
      match = file.meta['content-disposition'].match(/filename=(?:"([^"]+)"|([^";]+))/)
      match[1].presence || match[2].presence if match
    end
  end
end

CarrierWave::Downloader::RemoteFile.prepend RemoteUploader
