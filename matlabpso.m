msg = nargchk(1, 3, nargin)
if ~isempty(msg)
    error('mrr:myoptim:pso:pso:narginerr', 'Inadequate number of input arguments.');
end

msg = nargchk(0, 4, nargout);
if ~isempty(msg)
    error('mrr:myoptim:pso:pso:nargouterr', 'Inadequate number of output arguments.');
end
%The body of the algorithm
if nargin==1 && ischar(objfunc) && strcmp(objfunc,'options')
    if nargout<=1
        x=getDefaultOptions();
    else
        error('mrr:myoptim:pso:pso:nargouterr', 'Cannot expect more than one output when only OPTIONS are required.');
    end
else
    if nargin<3, options= getDefaultOptions();end
    if nargout == 4
        if strcmp(options.output_level,'none')
            if options.plot == 0
                output_level = 0;
            else
                output_level=1;
            end
        else if strcmp(options.output_level, 'low')
                output_level = 1;
        else if strcmp(options.output_level, 'medium')
                output_level = 2;
        else if strcmp(options.output_level , 'high')
                output_level = 3;
        else
            error('mrr:myoptim:pso:pso:optionserr:output_level', 'Invalid value of the OUTPUT_LEVEL options specified.');
            end
            end
            end
    else
        if options.plot == 1
            output_level=1
        else
            output_level = 0;
        end
     end
     if ~all(isnan(options.vmax))
         if any(isnan(options.vmax))
             error('mrr:myoptim:pso:pso:optionserr:vmax', 'VMAX option cannot have some Inf and some numerical (or Inf ) values .');
     end    
     if ~isnan(options.vmaxscale)
         warning('mrr:myoptim:pso:pso:optionserr:vmaxconflict', 'Both relative and absolute velocity limit are specified .');
     end
     if length(options.vmax) == 1
         vmax=options.vmax*ones(nvars, 1);
     else if length(ooptions.vmax) == nvars
             if size(options.vmax, 1) ~= length(option.vmax)
                 error('mrr:myoptim:pso:pso:optionserr:vmax', 'VMAX option should be specified as column vector or as a scalar value .');
             end
         vmax = optiuons.vmax;
         else 
            error('mrr:myoptim:pso:pso:optionserr:vmax', 'Inadequate dimension of VMAX option .Should be a scalar , or a column vector. ');
         end
     else
         if isnan(options.vmaxscale)
             error('mrr:myoptim:pso:pso:optionserr:vmaxscale', 'Either VMAX or VMAXSCALE options should be different than NaN.');
         end
         if length(options.initspan) ==1 
             vmax = options.vmaxscale*options.initspan*ones(nvars, 1);
         else
             vmax = options.vmaxscale*options.initspan;
         end
     else
         error ('mrr:myoptim:pso:pso:optionserr:vmax', 'Inadequate dimension of VMAXSCALE option. Must be a scalar.');
        end
     end
        vmax=repmat(vmax,options.npart,1);
        if ~isnan(options.initpopulation)
            [pno , pdim ] = size(options.initpopulation);
            if(pno ~= options.npart) || (pdim ~= nvars)
                error
         
         
         
         
         
         
      
     
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         